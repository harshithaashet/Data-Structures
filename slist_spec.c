/*
 *	Author : Deepak
 *	Date   : 23 August 2019
 *	Specification file for Single Linked List
 *	Contain test cases to test various functionalities
 *	of Single Linked List.
*/


#include <assert.h>
#include "slist.h"

void test_empty_list()
{
	Slist s = slist_new();
	Slist *list = &s;
	assert (slist_length(list) == 0);
}

void test_addition_at_head()
{
    Slist s = slist_new();
	Slist *list = &s;
	list = slist_add_head(list, 13);
	assert (slist_length(list) == 1);

	list = slist_add_head(list, 26);
	list = slist_add_head(list, 35);
	list = slist_add_head(list, 49);
	list = slist_add_head(list, 55);
	list = slist_add_head(list, 65);
	list = slist_add_tail(list, 99);

	assert (slist_length(list) == 7);
	assert (slist_lookup(list, 49));
	list = slist_delete_head(list);
	list = slist_delete_tail(list);

	slist_display(list);
	slist_min_max(list);
	list = slist_spec_ele(list,100,26);
	slist_display(list);
	list = slist_spec_ele_delete(list,35);
	slist_display(list);

}

int main()
{
	test_empty_list();
	Slist s = slist_new();
	Slist *list = &s;

	Slist s1 = slist_new();
	Slist *list1 = &s1;

	Slist u = slist_new();
	Slist *union_list = &u;

	Slist i = slist_new();
	Slist *intersection_list = &i;

	list = slist_add_head(list, 10);
	list = slist_add_head(list, 20);
	list1 = slist_add_head(list1, 10);
	list1 = slist_add_head(list1, 20);
	list = slist_add_head(list, 30);
	list = slist_add_head(list, 50);
	slist_display(list);
	slist_display(list1);
	//list = slist_spec_ele(list,200,10);

	//list = slist_spec_ele_delete(list,50);
	//assert (slist_lookup(list, 50)==0);
	//list = reverse_list(list);
	//slist_display(list);
    //assert(list_compare(list,list1)==1);

    //union_list = union_twolist(union_list,list,list1);
    //slist_display(union_list);
    //intersection_list= intersection_twolist(intersection_list,list,list1);
    //slist_display(intersection_list);

    Slist uni = slist_new();
	Slist *unique_list = &uni;

	//unique_list=unique_slist(unique_list,10);
	//unique_list=unique_slist(unique_list,20);
	//assert(unique_slist(unique_list,10));
    //slist_display(unique_list);



    	//test_addition_at_head();
	return 0;
}