//
//  BlockPatient.h
//  HoolayBlock
//
//  Created by 刘璞峰 on 15/8/5.
//  Copyright (c) 2015年 patient. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol BlockPatient <NSObject>

-(void)parameter:(NSString *)string callback:(void (^)(NSString *))dict callvackerror:(void (^)(NSError *))errorsteing;

@end



