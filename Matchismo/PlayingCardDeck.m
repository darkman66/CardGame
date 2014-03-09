//
//  PlayingCardDeck.m
//  Matchismo
//
//  Created by Hubert Piotrowski on 9/3/14.
//  Copyright (c) 2014 Hubert Piotrowski. All rights reserved.
//

#import "PlayingCardDeck.h"
#import "PlayingCard.h"

@implementation PlayingCardDeck

- (instancetype)init {
    self = [super init];
    
    if (self) {
        for (NSString *suit in [PlayingCard validSuits]) {
            for (NSUInteger rank = 1; rank <= [PlayingCard maxRank]; rank++) {
                PlayingCard *card = [[PlayingCard alloc] init];
                card.rank = rank;
                card.suit = suit;
                [self addCard:card];
            }
        }

    }
    return self;
}


@end
