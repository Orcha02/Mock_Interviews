#!/usr/bin/python3
common_elements = __import__('Common_elements').common_elements

set_1 = { "Apple", "Banana", "Orange" }
set_2 = { "Microsoft", "Linux", "Apple" }
c_set = common_elements(set_1, set_2)
print(sorted(list(c_set)))
