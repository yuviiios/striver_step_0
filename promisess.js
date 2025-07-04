function waitfor3S(resolve) {
    setTimeout(resolve,10000)
}

function setTimeoutPromisified() {
    return new Promise(waitfor3S);
}

function main() {
    console.log("Main is called")
}


setTimeoutPromisified().then(main); //Promise Based Approach

setTimeout(main,3000); ///CALLBACK ASED APPROACH 