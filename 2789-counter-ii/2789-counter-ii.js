var createCounter = function(init) {
    let currentCount = init;
    
    return {
        increment: () => ++currentCount,
        decrement: () => --currentCount,
        reset: () => currentCount = init
    };
};