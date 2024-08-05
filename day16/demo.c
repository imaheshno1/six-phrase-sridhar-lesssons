struct demo
{
int num;
char name[60]
};
void d ( struct demo * ptr)
{

printf("%d %s", ptr->num,ptr->name);
ptr->name;

}
int main()
{
struct demo shr = {1264,"Shrutha"};
d(&shr);


}
