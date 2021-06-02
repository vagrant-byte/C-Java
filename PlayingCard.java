package TestDemo;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

//构造牌
class Card {
    private int rank;//牌面
    private String suit;//花色

    public Card(int rank, String suit) {
        this.rank = rank;
        this.suit = suit;
    }

    @Override
    public String toString() {
        return "Card{" +
                "rank=" + rank +
                ", suit='" + suit + '\'' +
                '}';
    }
}
//打印牌
class CardDome {
    public static final String[] suits={"♣","♠","♦","♥"};
    //打印牌
    public  List<Card> buyCard() {
        List<Card> deck=new ArrayList<>(52);
        for (int i = 0; i <suits.length ; i++) {
            for (int j = 1; j <=13 ; j++) {
                Card card=new Card(j,suits[i]);
                deck.add(card);
            }
        }
        return deck;
    }
    //交换
    public void swap(List<Card> cards,int i, int j) {
        Card tmp=cards.get(i);
        cards.set(i,cards.get(j));
        cards.set(j,tmp);

    }
    //洗牌
    public  void shuffle(List<Card> deck) {
        Random random=new Random();
        for (int i = deck.size()-1; i >0 ; i--) {
            int ret=random.nextInt(i);
            swap(deck,ret,i);
        }
    }
}

public class PlayingCard {
    public static void main(String[] args) {
        CardDome cardDome=new CardDome();
        List<Card> deck=cardDome.buyCard();
        cardDome.shuffle(deck);
        ArrayList<Card> head1=new ArrayList<>();
        ArrayList<Card> head2=new ArrayList<>();
        ArrayList<Card> head3=new ArrayList<>();
        ArrayList<ArrayList<Card>> head=new ArrayList<>();
        head.add(head1);
        head.add(head2);
        head.add(head3);
        for (int i = 0; i <5 ; i++) {
            for (int j = 0; j <3 ; j++) {
                Card card=deck.remove(0);
                head.get(j).add(card);
            }
        }
        for (int i = 0; i <head.size() ; i++) {
            System.out.println(head.get(i));
        }
    }
}
