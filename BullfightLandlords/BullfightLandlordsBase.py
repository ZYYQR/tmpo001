

# -*- coding: UTF-8 -*-
import random

class StartPoker():
    sourceKey = ["A", "2", "3", "4", "5", "6", "7", "8", "9", "J", "Q", "K"]
    sourceColor = ["����", "����", "÷��", "��Ƭ"]
    playCards = []
    biddingCards = []
    sourceClub = []
    def __init__(self, playCards, biddingCards, sourceClub):
        self.playCards = playCards
        self.biddingCards = biddingCards
        self.sourceClub = sourceClub


    def AAA(self):
        for x in self.sourceKey:
            for y in self.sourceColor:
                x = x
                y = y
                club = (x, y)
                # print(club)
                self.sourceClub.append(club)

        numx1 = random.sample(xp, 4)

        return self.sourceClub






    def ProhibitionOfPlayingCards(self):
        '''�����Ѿ�˵��, ��ֹ ����'''
        print()



