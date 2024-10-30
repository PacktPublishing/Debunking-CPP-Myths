fn main() {
    let two = increment(1); 
    println!("{two}");

    println!("{:?}", increment_all());
}

fn increment(x:i32) -> i32{
    x+1
}

fn increment_all() -> Vec<i32>{
    let values : Vec<i32> = vec![1, 2, 3];
    return values.iter().map(|x| x+1).collect();
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        assert_eq!(vec![2, 3, 4], increment_all());
    }
}
