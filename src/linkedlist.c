
#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

Node_t* InitNode(int value) {
	Node_t* node = calloc(1, sizeof(Node_t*));
	node->Value = value;
	node->Next = NO_NODE;

	return node;
}

int AppendNode(Node_t* node, int value) {
	if (node == NO_NODE) {
		return NODE_FAILURE;
	}

	while (node->Next != NO_NODE) {
		node = node->Next;
	}

	node->Next = InitNode(value);
	return NODE_SUCCESS;
}

int RemoveNodeByIndex(Node_t* node, unsigned int index) {
	if (node == NO_NODE) {
		return NODE_FAILURE;
	}

	Node_t* prev = NO_NODE;
	int idx = 0;

	while (node != NO_NODE) {
		if (idx++ == index) {
			if (prev == NO_NODE) {
				*node = *node->Next;
			}
			else {
				prev->Next = node->Next;
			}

			return NODE_SUCCESS;
		}

		prev = node;
		node = node->Next;
	}

	return NODE_FAILURE;
}

int RemoveNodeByValue(Node_t* node, int value) {
	if (node == NO_NODE) {
		return NODE_FAILURE;
	}

	Node_t* prev = NO_NODE;

	while (node != NO_NODE) {
		if (node->Value == value) {
			if (prev == NO_NODE) {
				*node = *node->Next;
			}
			else {
				prev->Next = node->Next;
			}

			return NODE_SUCCESS;
		}

		prev = node;
		node = node->Next;
	}

	return NODE_FAILURE;
}

