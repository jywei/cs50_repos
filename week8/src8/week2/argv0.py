import sys

if len(sys.argv) == 2:
    print("hello, {}".format(sys.argv[1]))
else:
    print("hello, world")

if len(sys.argv) == 2:
    print("hello, " + sys.argv[1])
else:
    print("hello, world")
