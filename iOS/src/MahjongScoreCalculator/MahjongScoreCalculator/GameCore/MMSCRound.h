//
//  MMSCRound.h
//  MahjongScoreCalculator
//
//  一场游戏中的一局
//
//  Created by fredfx on 16/1/2.
//  Copyright © 2016年 fredfx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MMSCUtil.h"

@class MMSCRoundResult;
@class MMSCPlayer;

@interface MMSCRound : NSObject

// 场风
@property(nonatomic, assign) MMSCWind roundWind;

// 局数(1,2,3,4)
@property(nonatomic, assign) NSInteger roundNumeber;

// 本场数
@property(nonatomic, assign) NSInteger bonbanNumber;

// 结果
@property(nonatomic, strong) MMSCRoundResult *result;

// 场上的立直棒
@property(nonatomic, assign) NSInteger richiScore;

// 本场立直的玩家
@property(nonatomic, strong) NSMutableArray *richiPlayerIndexes;

// 换庄
@property(nonatomic, assign) BOOL oyaChanged;

// 立直
- (void)richiAtPlayer:(MMSCPlayer *)player index:(NSUInteger)index;

// 取消立直
- (void)cancelRichiAtPlayer:(MMSCPlayer *)player index:(NSUInteger)index;

// 结束该局
- (void)endRoundWithPlayers:(NSArray *)players;

// 该局的分数变化
- (NSArray *)roundScoreChanges;

// 此局名称
- (NSString *)roundName;

@end
