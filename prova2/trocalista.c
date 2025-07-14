struct ListNode* trocaLista(struct ListNode* head) {
    if (!head || !head->next) return head;
    struct ListNode* ant = NULL;
    struct ListNode* atual = head;
    struct ListNode* headNova = head->next;

    while (atual && atual->next) {
        struct ListNode* next = atual->next;
        struct ListNode* next2 = next->next;

        next->next = atual;
        if (ant) {
            ant->next = next;
        }
        atual->next = next2;

        ant = atual;
        atual = next2;
    }
    return headNova;
}