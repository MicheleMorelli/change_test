import sys

c_or_p = [100, 50, 20, 10, 5, 2, 1, .5,.2,.1, .05, .02, .01]
price_to_be_paid = float(sys.argv[1]) if len(sys.argv) >= 2 else 34.5
note_given = float(sys.argv[2]) if len(sys.argv) >= 2 else 50

note_given -= price_to_be_paid;

for coin in c_or_p:
    while (note_given - coin >=0):
            note_given -= coin
            print(coin)

