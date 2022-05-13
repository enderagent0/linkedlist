
#define NODE_SUCCESS 1
#define NODE_FAILURE 0
#define NO_NODE 0

typedef struct Node {
	int Value;
	struct Node* Next;
} Node_t;

Node_t* InitNode(int value);
int AppendNode(Node_t* node, int value);
int RemoveNodeByIndex(Node_t* node, unsigned int index);
int RemoveNodeByValue(Node_t* node, int value);
