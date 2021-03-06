#ifndef NF10IFACE_H
#define NF10IFACE_H

#include <linux/fs.h>
#include "nf10driver.h"

#define MTU 1500

int nf10iface_probe(struct pci_dev *pdev, struct nf10_card *card);//接口初始化
int nf10iface_remove(struct pci_dev *pdev, struct nf10_card *card);//接口移除

#endif
