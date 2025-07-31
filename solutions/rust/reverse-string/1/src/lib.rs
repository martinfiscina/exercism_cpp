pub fn reverse(input: &str) -> String {
    //todo!("Write a function to reverse {input}");
    let result = input.chars().rev().collect::<String>();
    result
}
