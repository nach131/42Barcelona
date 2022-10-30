### Lista INT

```c
typedef struct s_list t_list;

struct s_list
{
	int     data; // definida como tipo INT
	t_list  *next;
};
```

Para mi lo más sencillo es utilizar ```calloc```, si no habra que definir al ultimo elemento de la lista con valor 0 o NULL.


### lista de 3 elementos tipo ```INT```

```c
int main(void)
{
    t_list *c = malloc(sizeof(t_list));
    c->data = 42; // podemos asignar valor directamente
    c->next = 0; // importante definir el ultimo elemento como 0

    t_list *b = malloc(sizeof(t_list));
    b->next = c;
    b->data = 431;

    t_list *a = malloc(sizeof(t_list));
    a->next = b;
    a->data = 12;

    t_list *cur = a;

    print_lst(cur);
    sort_list(cur, ascending);
    printf("---\n");
    print_lst(cur);
}
```

### lista ```VOID```
```c
typedef struct	s_list
{
    struct s_list *next;
    void          *data; // definida como ```VOID```
}	t_list;
```
Al definirla como ```VOID``` puntero podemos pasar cualquier tipo de valor.
Tendremos que declarar una varible del tipo necesario asignar valor e igualar la dirección del puntero a ```data``` de la lista.

```c
int main(void)
{
    t_list *c = calloc(1, sizeof(t_list));
    int n_c = 12; // Declarada y asignado valor de tipo ```INT``
    c->data = &n_c; // Igualamos la dirección del puntero a data

    t_list *b = calloc(1, sizeof(t_list));
    b->next = c;
    int n_b = 6;
    b->data = &n_b;

    t_list *a = calloc(1, sizeof(t_list));
    a->next = b;
    int n_a = 42;
    a->data = &n_a;

    t_list *cur = a;

    print_lst(cur);
    ft_pot(a->data);
    print_lst(cur);

    return (0);
}
```

## Imprimir Lista

```c
void    print_lst(t_list *lst)
{
    while(lst)
    {
        printf("%d\n", lst->data);
        lst = lst->next;
    }
}
```
