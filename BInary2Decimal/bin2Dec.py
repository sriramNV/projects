def validate(inp):
    for i in inp:
        if i not in {"0", "1"}:
            print("wrong input, please input only 1s and 0s for binary")
            return False

    return True


def bin2Dec(n):
    base = 1
    dec = 0
    temp = n

    while temp:
        last = temp % 10
        temp = temp // 10
        dec += last * base
        base *= 2
    return dec


inp = input("Enter the Binary(8bits): ")
flag = 0


if len(inp) <= 8:
    if validate(inp):
        print("the decimal val is: ", bin2Dec(int(inp)))
else:
    print("please enter only 8 bit binary")
