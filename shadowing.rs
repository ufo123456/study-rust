fn main() {
    let x = 5;

    let x = x + 1;

    {
        let x = x * 2;
        println!("The value of x in the inner scope is: {x}");//在内部定义 ×2并打印
    }

    println!("The value of x is: {x}");//打印住定义域x的值
}

