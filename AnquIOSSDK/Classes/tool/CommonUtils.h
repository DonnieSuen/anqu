//
//  CommonUtils.h
//  AnnieIosSdk
//
//  Created by jeffson on 16/4/4.
//  Copyright © 2016年 Anqu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CommonUtils : NSObject

+ (CommonUtils *)sharedSingleton;

+(NSUserDefaults*) getNSUserContext;

+(void)showMessage:(NSString*)msg;


@end