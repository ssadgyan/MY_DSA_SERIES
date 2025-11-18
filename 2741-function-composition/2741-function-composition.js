/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    return function(x) {
        // Handle empty array case - return identity function
        if (functions.length === 0) {
            return x;
        }
        
        // Apply functions from right to left using reduceRight
        return functions.reduceRight((acc, fn) => fn(acc), x);
    }
};