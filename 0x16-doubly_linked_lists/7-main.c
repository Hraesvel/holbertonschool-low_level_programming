#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void test_0(void)
{
    dlistint_t *head;
	printf("test 0 \n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
}

void test_1(void)
{
    dlistint_t *head;
	printf("test 1 \n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 0, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
}

void test_2(void)
{
    dlistint_t *head;
	printf("test 2 \n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 8, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
}
void test_3(void)
{
    dlistint_t *head;
	printf("test 3 \n");
    head = NULL;
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 0, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
}
void test_4(void)
{
    dlistint_t *head;
	printf("test 4 \n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 2, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	test_0();
	test_1();
	test_2();
	test_3();
	test_4();
    return (EXIT_SUCCESS);
}
