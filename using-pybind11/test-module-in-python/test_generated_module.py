import _blockchain


print("_blockchain module imported")


difficulty = 6

blockchain_obj = _blockchain.Blockchain(difficulty)

print("Blockchain created with difficulty {} ".format(difficulty))

print("Creating block 1 with 1 transaction ...")

block1 = _blockchain.Block()
block1.NewTransaction("Omar", "Redouane", 10)

print("Mining block 1 ...")
blockchain_obj.NewBlock(block1)

print("Creating block 2 with 4 transaction ...")
block2 = _blockchain.Block()
block2.NewTransaction("Pape", "Julien", 100)
block2.NewTransaction("Hummer", "Mercedes", 20.5)
block2.NewTransaction("Francois", "Jones", 30.5)
block2.NewTransaction("Karim", "Alain", 300)

print("Mining block 2 ...")
blockchain_obj.NewBlock(block2)

print("Creating block 3 with 10 transaction ...")
block3 = _blockchain.Block()
block3.NewTransaction("Younes", "Taoufik", 100)
block3.NewTransaction("Paris Saint Germain", "Real Madrid", 200)
block3.NewTransaction("Bayern", "Liverpool", 300)
block3.NewTransaction("Jean", "Alex", 20.55)
block3.NewTransaction("toto", "papo", 35.8)
block3.NewTransaction("Enstein", "Euler", 200)
block3.NewTransaction("Gauss", "Ronaldo", 300)
block3.NewTransaction("Messi", "Ribery", 300)
block3.NewTransaction("Matin", "Martin", 300)
block3.NewTransaction("Daniel", "Pierre", 300)

print("Mining block 3 ...")
blockchain_obj.NewBlock(block3)

print("Mining finished")



