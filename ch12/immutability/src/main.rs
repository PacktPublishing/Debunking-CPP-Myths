fn main() {
    // Uncomment next line and comment line 4 to see the mutation error
    //let the_message = "Hello, world!";
    let mut the_message = "Hello, world!";
    println!("{the_message}");
    the_message = "A new hello!";
    println!("{the_message}");
}
