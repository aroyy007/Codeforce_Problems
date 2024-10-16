fun sumOfDigits(n: Int): Int {
    var sum = 0
    var num = n
    while (num > 0) {
        sum += num % 10
        num /= 10
    }
    return sum
}

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (x, y) = readLine()!!.split(" ").map { it.toInt() }
        val a = y / x
        val b = y % x
        val c = sumOfDigits(a)
        println(c + b)
    }
}
