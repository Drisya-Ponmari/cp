
class Node:
	def __init__ (self,key):
		self.left  = None
		self.right = None
		self.val = key
		
def insert(root,node):
	if root is None:
		root = node
	else:
		if root.val< node.val:
			insert(root.right,node)
		else:
			insert(root.left,node)
def search(key,root):
	if(key == root.val):
		return root
	if(key > root.val):
		search(key,root.right)
	else:
		search(key,root.left)
	
def preorder(start_root):
	if(start_root == None):
		return;
	print(start_root.value)
	preorder(start_root.left)
	preorder(start_root.right)

n = int(input())
v = input()
v.split()
print(v)
r = Node(int(v[0]))
for i in range(n-1):
	insert(r,Node(int(v[i+1))
	
