#function to create tree and
#count the number of pairs resulting
#from query as defined in problem.
#https://www.hackerrank.com/challenges/counting-on-a-tree

#position to index
def pti(postion):
    return position - 1
#find if odd -helps
#determine what to do
def odd(x):
    return x % 2
#build tree
def build_tree(values, e_locs):
    tree = []
    for x in e_loc:
        #corrects input numeration
        if tree[0] is None:
            tree[x] = 5


    return tree


num_nodes, queries = input().split()
queries = int(queries)
num_nodes = int(num_nodes)

tree_nums = []
e_locs = []
str_vals = input().split()
for x in str_vals:
    tree_nums.append(int(x))
for x in range(num_nodes - 1):
    temp = input().split()
    e_locs.append(temp[0:2])
