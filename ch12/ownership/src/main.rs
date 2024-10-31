fn main() {
}

#[cfg(test)] 
mod tests { 
    #[test] 
    fn copy_on_stack() { 
        let stack_value = 1;
        let copied_stack_value = stack_value;

        assert_eq!(1, stack_value); 
        assert_eq!(1, copied_stack_value); 
    } 

    #[test] 
    fn copy_on_heap() { 
        let heap_value = String::from("A string");
        let copied_heap_value = heap_value;

        // Uncomment next line to see error related to move semantics
        //assert_eq!(String::from("A string"), heap_value); 
        assert_eq!(String::from("A string"), copied_heap_value); 
    } 

    #[test] 
    fn clone_on_heap() { 
        let heap_value = String::from("A string");
        let copied_heap_value = heap_value.clone();

        assert_eq!(String::from("A string"), heap_value); 
        assert_eq!(String::from("A string"), copied_heap_value); 
    } 

    fn call_me(value: String) -> String {
        return value;
    }

    #[test] 
    fn move_semantics_method_call() { 
        let heap_value = String::from("A string");

        let result = call_me(heap_value);

        // Uncomment next line to see error related to move semantics
        //assert_eq!(String::from("A string"), heap_value); 
        assert_eq!(String::from("A string"), result); 
    } 

    fn i_borrow(value: &String) -> &String {
        return value;
    }

    #[test] 
    fn borrow_method_call() { 
        let heap_value = String::from("A string");

        let result = i_borrow(&heap_value);

        assert_eq!(String::from("A string"), heap_value); 
        assert_eq!(String::from("A string"), *result); 
    } 
} 
