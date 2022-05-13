
int LocateVex(AMGraph G, VertexType u)
{
    int i;
    for (int i = 0; i < G.vexnum; i++)
        if (u == G.vexs[i])
            return i;
    return -1;
}