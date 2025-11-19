var cancellable = function(fn, args, t) {
    // Schedule fn to execute after t milliseconds
    const timer = setTimeout(() => {
        fn(...args);
    }, t);
    
    // Return a cancel function that clears the timeout
    return function() {
        clearTimeout(timer);
    };
};