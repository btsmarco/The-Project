#This is a script that Converts Postfix to Infix expressions
#

def postin(expression):
    stack = []

    for e in expression:
        if(e > "/"):
            stack.append(e)
        else:
            r = stack.pop() #right to come out
            l = stack.pop() #left...
            exp = l + e + r  #infix = left, root,right
            stack.append(exp)

    infix = stack.pop()
    return infix

    if(stack):
        return 0

if ('__main__' == __name__) :
    if(stack):
        print "Error: an extra expression in the stack:%s " %stack.pop()

