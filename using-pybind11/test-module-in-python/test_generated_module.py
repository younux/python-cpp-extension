import transaction


trans1 = transaction.Transaction("Younes", "Taoufik", 33.5)

print("Transaction sender is : {}".format(trans1.sender))
print("Transaction recipient is : {}".format(trans1.recipient))
print("Transaction amount is : {}".format(trans1.amount))
print("Transaction ToString :  {}".format(trans1.ToString()))