from random import getrandbits

while True:
    print('{:x}'.format(getrandbits(30 * 10000)))