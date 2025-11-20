var cancellable = function(fn, args, t) {
    // Call the function immediately
    fn(...args);
    
    // Set up the interval to call the function every t milliseconds
    const intervalId = setInterval(() => {
        fn(...args);
    }, t);
    
    // Define the cancel function to clear the interval
    const cancelFn = () => {
        clearInterval(intervalId);
    };
    
    // Return the cancel function
    return cancelFn;
};