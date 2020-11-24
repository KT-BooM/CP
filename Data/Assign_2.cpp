#include <iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int memory;
    struct node* parent;
    struct node* leftChild;
    struct node* rightSibling;
};
struct node* createRoot(int memory)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->memory = memory;
    node->parent = NULL;
    node->leftChild = NULL;
    node->rightSibling = NULL;
    return(node);
}
struct node* createNode(int memory, struct node* parent)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->memory = memory;
  node->parent = parent;
  node->leftChild = NULL;
  node->rightSibling = NULL;
  if(node->parent != NULL) {
        if(node->parent->leftChild != NULL) {
            struct node* child = node->parent->leftChild;
            while(child->rightSibling != NULL) {
                child = child->rightSibling;
            }
            child->rightSibling = node;
        }
        else {
            node->parent->leftChild = node;
        }
    }
 return(node);
}
static int sum = 0;
void compute(struct node* parent) {
	if(parent==NULL) 
		return;
	sum+=parent->memory;
	compute(parent->leftChild);
	compute(parent->rightSibling);     
}
int main(){
	struct node* user_rt_courses_ = createRoot(1);
	struct node* cs016_ =createNode(2, user_rt_courses_ );
	struct node* cs252_ =createNode(1, user_rt_courses_ );
	struct node* cs016_grades =createNode(8, cs016_);
	struct node* homeworks_ =createNode(1, cs016_);	
	struct node* programs_ =createNode(1, cs016_);
	struct node* homeworks_hw1 = createNode(3,homeworks_);
	struct node* homeworks_hw2 = createNode(2,homeworks_);
	struct node* homeworks_hw3 = createNode(4,homeworks_);
	struct node* programs_pr1 = createNode(57,programs_);
	struct node* programs_pr2 = createNode(97,programs_);
	struct node* programs_pr3 = createNode(74,programs_);
	struct node* projects_ = createNode(1,cs252_);
	struct node* projects_grades = createNode(3,cs252_);
	struct node* papers_ = createNode(1,projects_);
	struct node* demos_ = createNode(1,projects_);
	struct node* papers_buylow = createNode(26,papers_);
	struct node* papers_sellhigh = createNode(55,papers_);
	struct node* demos_market = createNode(4786,demos_);
	
	compute(user_rt_courses_);
	cout<<sum<<"k";
	return 0;
}
