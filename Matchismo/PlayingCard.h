//
//  PlayingCard.h
//  Matchismo
//
//  Created by Hubert Piotrowski on 9/3/14.
//  Copyright (c) 2014 Hubert Piotrowski. All rights reserved.
//


#import "Card.h"

@interface PlayingCard : Card


@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
