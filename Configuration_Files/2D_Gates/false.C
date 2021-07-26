void false()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 12 23:26:57 2021) by ROOT version 6.18/04
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",258,74,538,323);
   Canvas_1->Range(2.040064,48.66085,2.069273,49.98395);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TCutG *cutg = new TCutG("cID_Z1_AoQ9",9);
   cutg->SetVarX("");
   cutg->SetVarY("");
   cutg->SetTitle("Graph");
   cutg->SetFillStyle(1000);
   cutg->SetPoint(0,2.045001,49.19639);
   cutg->SetPoint(1,2.048937,49.65317);
   cutg->SetPoint(2,2.059571,49.76343);
   cutg->SetPoint(3,2.064405,49.44841);
   cutg->SetPoint(4,2.062402,49.07038);
   cutg->SetPoint(5,2.051147,48.88137);
   cutg->SetPoint(6,2.044932,49.11763);
   cutg->SetPoint(7,2.045001,49.19639);
   cutg->SetPoint(8,2.045001,49.19639);
   cutg->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4461567,0.9351869,0.5538433,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Graph");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
