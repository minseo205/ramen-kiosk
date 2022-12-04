#pragma once

#include "order_list.h"
#include "pay_list.h"
#include "revenue_manager.h"

class OrderCategory
{
	private:
		bool bPrint;
		bool mode; // 구매자 모드 0, 관리자 모드 1
		bool is_paid; // 결제 필요 0, 결제 완료 1
		bool is_printed; // 출력 필요 0, 출력 완료 1
		
		const MenuItem& item;
		OrderList* pOrderList;
		const PayPreset& payItem;
		PayList* pPayList;
		RevenueManager* pRevManager;

		bool Settings(void);
		void PrintOrder(void);
		void AddOrder(void);
		void EditOrder(void);
		void AddPay(void);
		void PrintReceipt(void);

	public:
		OrderCategory(const MenuItem& item, OrderList* pOrderList, const PayPreset& payItem, PayList* pPayList, RevenueManager* pRevManager);

		bool Run(void);
};

