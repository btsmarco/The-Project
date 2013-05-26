import sys
sys.path.insert(0,'..')

from postToin import postin

post = "abc*+de*f+g*+"

def test():
    infix = postin(post)
    assert infix == "a+b*c+d*e+f*g",infix

test()
