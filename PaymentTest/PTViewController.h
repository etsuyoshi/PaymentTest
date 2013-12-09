//
//  PTViewController.h
//  PaymentTest
//
//  Created by 遠藤 豪 on 2013/12/09.
//  Copyright (c) 2013年 endo.tuyo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h>

@interface PTViewController : UIViewController<SKProductsRequestDelegate,
SKPaymentTransactionObserver>{
    
}

- (void) completeTransaction: (SKPaymentTransaction *)transaction;
- (void) restoreTransaction: (SKPaymentTransaction *)transaction;
- (void) failedTransaction: (SKPaymentTransaction *)transaction;


@end
