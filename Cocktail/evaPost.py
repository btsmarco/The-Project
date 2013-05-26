#This is a script that evaluates Postfix expression


def evaluatePost(expression):
    stack = []

    for e in expression:
        if(e > "/"):
            stack.append(e)
        else:
            r = stack.pop() #right to come out
            l = stack.pop() #left...
            exp = l + e + r  #infix = left, root,right
            num = eval(exp)
            stack.append(str(num))

    result = stack.pop()
    return result

    if(stack):
        return 0


