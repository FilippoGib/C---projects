#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

#include <memory>
//add fa la somma e ritorna la risposta e alla fine notifica la console del suo stato con RCLCPP_INFO

void add(const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> request,
          std::shared_ptr<example_interfaces::srv::AddTwoInts::Response>      response)
{
  response->sum = request->a + request->b;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld" " b: %ld",
                request->a, request->b);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv); //inizializza la librearia rclcpp

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_two_ints_server"); //crea il nodo server

    //inizializza un servizio che si chiama add_two_ints e lo lega al metodo &add
  rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr service =
    node->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", &add);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints."); //stampa un messaggio di log

  rclcpp::spin(node); //rende il servizio disponibile
  rclcpp::shutdown();
}