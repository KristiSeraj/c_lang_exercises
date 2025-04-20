#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* create_node(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node*));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* new_node = create_node(data);
    new_node->next = *head;
    *head = new_node;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* new_node = create_node(data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAfterNode(struct Node** node, int data, int key) {
    struct Node* new_node = create_node(data);
    struct Node* temp = *node;
    while (temp != NULL) {
        if (temp->data == key) {
            new_node->next = temp->next;
            temp->next = new_node;
        }
        temp = temp->next;
    }
}

void deleteAtEnd(struct Node* head) {
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;

}

void deleteAtBegining(struct Node* head) {
    *head = *head->next;
}

void deleteNode(struct Node* head, int key) {
    struct Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == key) {
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
}

void print_list(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node* deleteDuplicates(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->data == temp->next->data) {
            struct Node* duplicate = temp->next;
            temp->next = temp->next->next;
            free(duplicate);
        } else {
            temp = temp->next;
        }
    }
    return head;
}

struct Node* mergeTwoSortedList(struct Node* l1, struct Node* l2) {
    struct Node* new_list = (struct Node*)malloc(sizeof(struct Node));
    struct Node* curr = new_list;
    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            curr->next = l1;
            l1 = l1->next;
        } else {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }
    if (l1 != NULL) {
        curr->next = l1;
    } else {
        curr->next = l2;
    }
    return new_list->next;
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    insertAtBeginning(&head, 0);
    insertAtBeginning(&head, 85);

    printf("Linked list: ");
    print_list(head);

    deleteAtBegining(head);
    printf("Linked list after deletion at beginning: ");
    print_list(head);

    insertAfterNode(&head, 5, 1);
    printf("Linked list after insertion after key: ");
    print_list(head);

    deleteAtEnd(head);
    printf("Linked list after deletion at end: ");
    print_list(head);

    deleteNode(head, 5);
    printf("Linked list after deletion at node: ");
    print_list(head);

    insertAtBeginning(&head, 0);
    insertAtEnd(&head, 2);
    printf("Linked list after adding duplicate: ");
    print_list(head);

    deleteDuplicates(head);
    printf("Linked list after removing duplicate: ");
    print_list(head);

    struct Node* l1 = NULL;
    struct Node* l2 = NULL;
    insertAtBeginning(&l1, 4);
    insertAtBeginning(&l1, 2);
    insertAtBeginning(&l1, 1);

    insertAtBeginning(&l2, 4);
    insertAtBeginning(&l2, 3);
    insertAtBeginning(&l2, 1);

    print_list(l1);
    print_list(l2);

    struct Node* new_list = mergeTwoSortedList(l1, l2);
    print_list(new_list);
}