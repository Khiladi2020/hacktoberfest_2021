tables_upto = 20
table_count = 10

print([[x*y for y in range(1,table_count+1)] for x in range(1,tables_upto+1)])