#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
#include <climits>
using namespace std;

// Memoization map to store minimum orbs required for each potion
unordered_map<string, int> memo;

// Recipe map: potion -> list of possible recipes (each recipe is a list of ingredients)
unordered_map<string, vector<vector<string>>> recipes;

// Function to compute minimum orbs required to brew a potion
int minOrbs(string potion) {
    // If potion is an item (not in recipes), no orbs needed
    if (recipes.find(potion) == recipes.end()) return 0;

    // If already computed, return memoized value
    if (memo.find(potion) != memo.end()) return memo[potion];

    int min_orbs = INT_MAX;

    // Try each recipe for the potion
    for (auto &ingredients : recipes[potion]) {
        int orbs = ingredients.size() - 1; // base orbs for combining ingredients
        for (auto &ing : ingredients) {
            orbs += minOrbs(ing); // add orbs needed to brew each ingredient
        }
        min_orbs = min(min_orbs, orbs);
    }

    memo[potion] = min_orbs;
    return min_orbs;
}

int main() {
    int N;
    cout << "Enter number of recipes: ";
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line);

        size_t eq_pos = line.find('=');
        string potion = line.substr(0, eq_pos);
        string ing_str = line.substr(eq_pos + 1);

        vector<string> ingredients;
        stringstream ss(ing_str);
        string ing;
        while (getline(ss, ing, '+')) {
            ingredients.push_back(ing);
        }

        recipes[potion].push_back(ingredients);
    }

    string target;
    getline(cin, target);

    cout << minOrbs(target) << endl;
    return 0;
}