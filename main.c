
#include <stdio.h>
#include "linkedlist.h"

int main() {
	/* Create Nodes (1-10) */

	Node_t* node = InitNode(1);
	
	for (int i = 2; i < 10; i++) {
		AppendNode(node, i);
	}

	/* Remove Nodes */

	// Remove node at position 4
	if (RemoveNodeByIndex(node, 3)) {
		printf("Successfully removed node 4\n");
	}
	else {
		printf("Failed to remove node 4\n");
	}
	
	// Remove node with value of 8
	if (RemoveNodeByValue(node, 8)) {
		printf("Successfully removed node with value of 8\n");
	}
	else {
		printf("Failed to remove node with value of 8\n");
	}

	/* Print Nodes */

	while (node != NO_NODE) {
		printf("Node: %d\n", node->Value);
		node = node->Next;
	}
}






