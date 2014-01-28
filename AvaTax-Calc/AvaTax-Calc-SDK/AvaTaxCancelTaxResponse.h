//
//  AvaTaxCancelTaxResponse.h
//  AvaTax-Calc
//
//  Created by Rob Busack on 1/28/14.
//  Copyright (c) 2014 Avalara. All rights reserved.
//

#import "AvaTaxResponse.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
@interface AvaTaxCancelTaxResponse : AvaTaxResponse

@property NSString* TransactionId;
@property NSString* DocId;

@end
