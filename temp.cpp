Status GetHead(LinkQueue Q, QElemType &e)
{
    if (Q.front == Q.rear)
        return ERROR;
    e = Q.front->next->data;
    return OK;
}