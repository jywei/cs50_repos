import cs50

c = cs50.get_char()
# there is no single char as in C
if c == 'Y' or c == 'y':
    print('yes')
elif c == 'N' or c == 'n':
    print('no')
else:
    print('error')
