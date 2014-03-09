//
//  Card.m
//  Matchismo
//
//  Created by Hubert Piotrowski on 9/3/14.
//  Copyright (c) 2014 Hubert Piotrowski. All rights reserved.
//

#import "Card.h"

@implementation Card


- (int)match:(NSArray *)otherCards
{
    int score = 0;
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1; }
    }
    return score;
}

@end
