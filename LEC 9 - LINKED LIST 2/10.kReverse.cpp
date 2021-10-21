class Pair
{
    public:
    Node *head;
    Node *tail;
};

Pair reverse(Node *head)
{
    if(head==NULL ||head->next==NULL)
    {
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair smallAns=reverse(head->next);
    smallAns.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=smallAns.head;
    ans.tail=head;
    return ans;
}
Node *kReverse(Node *head, int k)
{
    
    if(head==NULL ||head->next==NULL)
        return head;
    if(k==0)
        return head;
    Node *h1=head;
    Node *t1=head;
    int i;
    for(i=0;i<k-1;i++)
    {
        if(t1!=NULL)
        t1=t1->next;
        else{
            break;
        }
    }
    if(t1==NULL && i!=k-1){
        Pair p=reverse(h1);
        return p.head;
    }
    Node *h2=t1->next;
    t1->next=NULL;
    Pair p1;
    p1.head=h1;
    p1.tail=t1;
    Pair ans=reverse(h1);
    h1=ans.head;
    t1=ans.tail;
    Node *smallAns=kReverse(h2,k);
    t1->next=smallAns;
    return h1;
	//Write your code here
}

/*if(head==NULL ||head->next==NULL)
        return head;
    if(k==0)
        return head;
    Node *h1=head;
    Node *t1=head;
    for(int i=0;i<k-1;i++)
    {
        t1=t1->next;
        
    }
    Node *h2=t1->next;
    t1->next=NULL;
    Pair p1;
    p1.head=h1;
    p1.tail=t1;
    Pair ans=reverse(h1);
    h1=ans.head;
    t1=ans.tail;
    Node *smallAns=kReverse(h2,k);
    t1->next=smallAns;
    return h1;*/