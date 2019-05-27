#ifndef SRC_DEVPAYMENT_H_
#define SRC_DEVPAYMENT_H_
#include <string>
#include "amount.h"
#include "primitives/transaction.h"
#include "base58.h"
using namespace std;

static const char* DEFAULT_DEV_ADDRESS = "iGYBNv3Zp7h4yZSaXFUuzn2VaXvzAZAxsd";

class DevPayment {
public:
	DevPayment(const char* address = DEFAULT_DEV_ADDRESS) {
		devAddress.SetString(address);
	}
	~DevPayment(){};
	CAmount getDevPaymentAmount(int blockHeight, CAmount blockReward);
	void FillDevPayment(CMutableTransaction& txNew, int nBlockHeight, CAmount blockReward, CTxOut& txoutDevRet);
	bool IsBlockPayeeValid(const CTransaction& txNew, const int height, const CAmount blockReward);
private:
	CBitcoinAddress devAddress;
};



#endif /* SRC_DEVPAYMENT_H_ */
