#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    if a_dictionary is None:
        return None
    keys_list = list(a_dictionary.keys())
    for key in keys_list:
        if a_dictionary[key] is value:
            del a_dictionary[key]
    return a_dictionary
