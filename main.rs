use std::io;//引入io库


fn main() {
    println!("Guess the number!");
    //打印提示信息
    println!("pleasw input your guess.");//
    
    let mut guess = String::new();  //定义 输入变量
    
    io::stdin()
    .read_line(&mut guess)
    .expect("failed to read line"); //错误处理
    
    println!("You guessed {guess}"); // 打印用户输入
}
